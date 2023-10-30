//
//  main.swift
//  SwiftGrammer
//
//  Created by 이은호 on 2023/09/22.
//

//import Foundation
//
//print("Hello, World!")

//import Foundation
//
//var name: String = "Eunho"
//var age: Int = 17
//var job = "iOS Programmer"
//var height = 190.5
//
//print("\(type(of: height))")
//age = 99
//job = "writer"
//print("저의 이름은 \(name)이고, 나이는 \(age)이며, 직업은 \(job)입니다. 비밀이지만, 키는 \(height)입니다.")

//import Foundation
//
//print("Hello, World!")
//
//import Foundation
//
//let name: String = "Eunho"
//var age: Int = 17
//var job = "iOS Programmer"
//let height = 190.5
//
//print("\(type(of: height))")
//age = 99
//job = "writer"
//print("저의 이름은 \(name)이고, 나이는 \(age)이며, 직업은 \(job)입니다. 비밀이지만, 키는 \(height)입니다.")

//import Foundation

//var inteeger: Int = -100
//let unsigendInteeger: UInt = 50
//print("inteeger 값 :  \(inteeger), unsigendInteeger 값 : \(unsigendInteeger)")
//print("Int 최댓값 : \(Int.max), Int 최솟값 : \(Int.min)")
//print("UInt 최댓값 : \(UInt.max), UInt 최솟값 : \(UInt.min)")

//import Foundation
//
//let decimalInteger: Int = 28
//let binaryInteger: Int = 0b11100
//let octalInteger: Int = 0o34
//let hexadecimalInteger: Int = 0x1C
//
//print(decimalInteger, binaryInteger, octalInteger, hexadecimalInteger)

//var floatValue: Float = 1234567890.1
//let doubleValue: Double = 1234567890.1
//
//print("floatValue = \(floatValue) doubleValue = \(doubleValue)")
//
//floatValue = 12345.1
//
//print(floatValue)

//var num: Int = Int.random(in: -100...100)
//var num1: UInt = UInt.random(in: 1...30)
//var num2: Double = Double.random(in: 1.5...4.3)
//var num3: Float = Float.random(in: -0.5...1.5)
//
//print(num, num1, num2, num3)


//let appleA: Character = "A"
//print(appleA)
//
//let commandCharacter: Character = "😋"
//print(commandCharacter)
//
//let 한글변수이름: Character = "ㄱ"
//print(한글변수이름)

//let name: String = "eunho"
//
//var introduce: String = String()
//
//introduce.append("제 이름은")
//
//introduce = introduce + " " + name + "입니다."
//print(introduce)
//
//print("name의 글자 수 : \(name.count)")
//print("introduce의 글자 수 : \(introduce.count)")
//
//print("introduce 비어 있음? : \(introduce.isEmpty)")
//
//let unicodeScalarValue: String = "\u{2665}" + "\u{2667}"
//
//print(unicodeScalarValue)

//var someVar: Any = "hello eunho"
//someVar = 500.67
//someVar = -90

//var name = "eunho" //String
//name = 100 // 오류남 타입 추론으로 name은 String으로 지정되었기 때문


//typealias MyInt = Int
//typealias MyString = String
//typealias DoubleDouble = Double
//
//let age: MyInt = 17
//let name: MyString = "eunho"
//let height: DoubleDouble = 123.123123
//
//print(age, name, height)
//print(type(of: age), type(of: name), type(of: height))

//var person: (String, Int, Double) = ("eunho", 17, 182.7)
//
//print(type(of: person))
//print("전체 : \(person.self)")
//print("이름 : \(person.0), 나이 : \(person.1), 키 : \(person.2)")

//var person: (name: String, age: Int, height: Double) = ("eunho", 17, 182.7)
//
//print(type(of: person))
//print("전체 : \(person.self)")
//print("이름 : \(person.name), 나이 : \(person.age), 키 : \(person.height)")
//
//person.name = "tyler"
//person.age = 20
//
//print("이름 : \(person.0), 나이 : \(person.1), 키 : \(person.2)")

//typealias PersonTuple = (name: String, age: Int, height: Double)
//
//let eunho: PersonTuple = ("eunho", 17, 190.5)
//let tyler: PersonTuple = ("tyler", 19, 158.9)
//
//print("이름 : \(eunho.name), 나이 : \(eunho.age), 키 : \(eunho.height)")
//print("이름 : \(tyler.name), 나이 : \(tyler.age), 키 : \(tyler.height)")

//var names: Array<String> = ["eunho", "tyler", "hyunsu", "junghyun"]
//var name: [String] = ["eunho", "tyler", "hyunsu", "junghyun"]
//
//var emptyArray: [Any] = [Any]()
//var emptyArray1: [Any] = Array<Any>()
//var emptyArray2: [Any] = []
//
//print(emptyArray.isEmpty)
//print(emptyArray1.isEmpty)
//print(emptyArray2.isEmpty)
//print(names.count)


//var names: Array<String> = ["eunho", "tyler", "hyunsu", "junghyun"]
//print(names[2])
//
//names.append("swift")
//names.append(contentsOf: ["sdfsdf", "asdfasdf"])
//
//names.insert("happpy", at: 2)
//names.insert(contentsOf: ["12345", "45678"], at: 5)


