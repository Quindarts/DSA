/**
 * Dạng lifo  (Last In First Out) vào sau ra trước
 * Dạng filo  (First In Last Out) đầu tiên ra sau cùng
 * 
 * * */

// Triển khai Stack class
class Stack {
	// Mảng dùng để triển khai stack
	constructor()
	{
		this.items = [];
	}

	//Cac Functions gồm:
	// push(item): them 1 item vao stack
    push(item)
    {
        this.items.push(item)
    }

	// pop(): tra ve item tren cung cua stack va xoa item do. 
    pop()
    {
    if (this.items.length == 0)
        return "Underflow"; // truong hop stack trong tra ve string
    return this.items.pop();
    }

	// peek(): tra ve 1 tap hop item nam tren cung stack 
    peek()
    {
    return this.items[this.items.length - 1];
    }

	// isEmpty(): tra ve boolean. Tra ve "true" neu Stack trong.
    isEmpty()
    {   
    return this.items.length == 0;
    }

	// printStack(): hien thi stack 
    printStack()
    {
    var str = "";
    for (var i = 0; i < this.items.length; i++)
        str += this.items[i] + " ";
    return str;
    }
}

// Demo
let stack  = new Stack();
console.log(stack.isEmpty);
