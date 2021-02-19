document.getElementById('brand-form').addEventListener('submit', function(e) {
    const city = document.getElementById("city").value;
    const pet = document.getElementById("pet").value;
    const brandName = city +" " +pet;
    
    if(city != '' && pet != ''){
        const form = document.getElementById('brand-form');
        const hr = document.createElement('hr');
        const results = document.createElement('div');
        results.innerHTML = `<h3>Your Brandname: <span class="brandname">${brandName}</span></h3>`;
        form.appendChild(hr);
        form.appendChild(results);
    }

    e.preventDefault();
});