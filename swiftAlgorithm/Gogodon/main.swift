import Foundation

func swapTwoInts(_ a: inout Int, _ b: intout Int) {
    let tempA = a
    a = b
    b = tempA
}
