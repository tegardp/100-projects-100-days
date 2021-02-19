const results = document.getElementById('results');
const loading = document.getElementById('loading');
results.style.display = 'none';
loading.style.display = 'none';


document.getElementById('bill-form').addEventListener('submit', function(e) {
      
    const total_bill = parseFloat(document.getElementById('total-bill').value);
    const tip_percentage = parseInt(document.getElementById('tip-percentage').value);
    const num_of_people = isNaN(parseInt(document.getElementById('number-of-people').value)) ? 1 : parseInt(document.getElementById('number-of-people').value);
    const calculate = !isNaN(total_bill) && !isNaN(tip_percentage) ? ((total_bill + total_bill * tip_percentage / 100) / num_of_people) : NaN;

    if(!isNaN(calculate)){
        loading.style.display = 'block';
        results.style.display = 'none';
        
        setTimeout(function() {
            const payment = document.getElementById('payment');
            payment.value = calculate.toFixed(2);
    
            results.style.display = 'block';
            loading.style.display = 'none';
        }, 1000);
    }

    e.preventDefault();
})