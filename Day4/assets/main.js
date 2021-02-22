const choice1 = document.getElementById('choice1container');
const choice2 = document.getElementById('choice2container');
const choice3 = document.getElementById('choice3container');
const btnStart = document.getElementById('btn-game-start');
const headline = document.getElementById('headline');
choice1.style.display = 'none';
choice2.style.display = 'none';
choice3.style.display = 'none';
const choice1List = ['left', 'right'];
const choice2List = ['swim', 'wait'];
const choice3List = ['red', 'blue', 'yellow'];
let answers = [];
let choices = [];
let state = 0;
let status = true;

btnStart.addEventListener('click', gameStart);

function display(num, status) {
    if (status == false) {
        console.log(status);
        btnStart.style.display = 'none';
        choice1.style.display = 'none';
        choice2.style.display = 'none';
        choice3.style.display = 'none';
        if(num == 0){
            headline.textContent = 'You fall into the hole';
        }
        if(num == 1){
            headline.textContent = 'Attacked by trout. Game Over';
        }
        if(num == 2){
            headline.textContent = 'You died without knowing why you died. Game Over';
        }
    } else {
        if (num == 0) {
            btnStart.style.display = 'none';
            choice1.style.display = 'block';
            headline.textContent = 'Where would you like to go?';
        } else if (num == 1) {
            btnStart.style.display = 'none';
            choice1.style.display = 'none';
            choice2.style.display = 'block';
            headline.textContent = 'You find a river blocking your way.';
        } else if (num == 2) {
            btnStart.style.display = 'none';
            choice1.style.display = 'none';
            choice2.style.display = 'none';
            choice3.style.display = 'block';
            headline.textContent = 'Suddenly 3 doors popped out in front of you. Which door would you like to enter?';
        } else if (num == 3) {
            headline.textContent = 'You find the treasure. YOU WIN!';
        }
    }
}

function gameStart() {
    display(state, );
    document.addEventListener('mouseup', checkState);
    answers = [
                choice1List[Math.floor(Math.random() * choice1List.length)],
                choice2List[Math.floor(Math.random() * choice2List.length)],
                choice3List[Math.floor(Math.random() * choice3List.length)],
            ]
}
function checkState(e) {
    if (e.target.className.includes('choice')){
        const choice = e.target.id.split('-')[1];
        choices.push(choice)
        if(answers[state] == choices[state]){
            state++;
            display(state,true);
        } else {
            state++;
            display(state-1, false);
        }
    }
}