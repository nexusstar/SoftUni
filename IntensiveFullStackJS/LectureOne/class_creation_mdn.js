"use strict";

(function(){

    var Employee = function(){
        this.name = '';
        this.dept = 'general';
    };

    var Manager = function(){
        Employee.call(this);
        this.report = [];
    };

    Manager.prototype = Object.create(Employee.prototype);

    var WorkerBee = function(){
        Employee.call(this);
        this.projects = [];
    };

    WorkerBee.prototype = Object.create(Employee.prototype);

    var SalesPerson  = function(){
        WorkerBee.call(this);
        this.dept = "sales";
        this.quota = 100;
    };

    SalesPerson.prototype = Object.create(WorkerBee.prototype);

    var Engineer = function(){
        WorkerBee.call(this);
        this.department = "engineering";
        this.machine = "";
    };

    Engineer.prototype = Object.create(WorkerBee.prototype);

    return {
        Employee: Employee(),
        Manager: Manager(),
        WorkerBee: WorkerBee(),
        SalesPerson: SalesPerson(),
        Engineer: Engineer()
    }
}());

//new Instance of Engineer
var jim = new Engineer;
jim.name = "Jim";
jim.machine = "Space ship";
jim.some = "something else";

console.log(Engineer.toString());
console.log(jim);
console.log(jim.hasOwnProperty('name'));


for (var propName in jim){
    console.log(propName);
}

