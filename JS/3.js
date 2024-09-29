let side1 = prompt("Give your side-1:");
    let side2 = prompt("Give your side-2:");
    let side3 = prompt("Give your side-3:");
    
    if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
        console.log("Sides must be positive numbers.");
        return;
    }

    if (side1 === side2 && side2 === side3) {
        console.log("This triangle is equilateral.");
    } else if (side1 === side2 || side2 === side3 || side1 === side3) {
        console.log("This triangle is isosceles.");
    } else {
        console.log("This triangle is scalene.");
    }