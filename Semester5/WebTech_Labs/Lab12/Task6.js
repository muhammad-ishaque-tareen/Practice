let car = {  
    make: "Toyota",  
    model: "Corolla",  
    year: 2020,  
    getDetails: function() 
    {  
        return this.year + " " + this.make + " " + this.model;  
    }  
};  

console.log(car.getDetails());