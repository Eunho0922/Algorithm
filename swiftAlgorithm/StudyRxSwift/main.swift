import RxSwift
import Foundation

example(of: "just, of, from") {
    let  num = [1, 2, 3]
    let one = 1
    let two = 2
    let three = 3
    
    let observable1 = Observable.from(num)
    let observable2 = Observable<Int>.just(one)
    let observable3 = Observable.of(one, two, three)
    let observable4 = Observable.just([one,two, three])
    let observable5 = Observable.from([one, two, three])
    let observable6 = Observable.of(num)
    
    
    observable1.subscribe(onNext: { event in
        print(event)
    },
                          onCompleted: {
        print("아아아")
    }).dispose()
    print("\n")
    observable2.subscribe(onNext: { event in
        print(event)
    }).dispose()
    print("\n")
    observable3.subscribe(onNext: { event in
        print(event)
    }).dispose()
    print("\n")
    observable4.subscribe(onNext: { event in
        print(event)
    }).dispose()
    print("\n")
    observable5.subscribe(onNext: { event in
        print(event)
    }).dispose()
    print("\n")
    observable6.subscribe(onNext: { event in
        print(event)
    }).dispose()

}

public func example(of description: String,
                    action: () -> Void) {
    print("\n--- Example of:", description, "---")
    action()
}





//let  num1 = [1, 2, 3]
//
//
//let observable = Observable<Int>.from(num1)
//
//observable.subscribe(onNext: { event in
//    print(event)
//},
//                     onError: { error in
//    print("error : \(error)")
//},
//                     onCompleted: {
//    print("completed")
//}).dispose()

//example(of: "create") {
//    let disposeBag = DisposeBag()
//
//    let observable = Observable<String>.create({ (elment) -> Disposable in
//
//        elment.onNext("1")
//
//        elment.onCompleted()
//
//        elment.onNext("?")
//
//
//        return Disposables.create()
//    })
//
//    observable.subscribe(onNext:  {(event) in
//        print(event)
//    }).dispose()
//
//    /* prints
//        next(1)
//        completed
//     */
//}
//
//public func example(of description: String,
//                     action: () -> Void) {
//     print("\n--- Example of:", description, "---")
//     action()
// }


//example(of: "subscribe") {
//    let one = 1
//    let two = 2
//    let three = 3
//
//    let observarble = Observable<Int>.of(one, two, three)
//
//    observarble.subscribe { event in
//    print(event)
//    }.dispose()
//}
//
//public func example(of description: String,
//                    action: () -> Void) {
//    print("\n--- Example of:", description, "---")
//    action()
//}

//example(of: "empty") {
//     let observable = Observable<Void>.empty()
//
//     observable.subscribe(
//
//         onNext: { (element) in
//             print(element)
//     },
//
//         onCompleted: {
//             print("Completed")
//     }
//     ).dispose()
// }

//example(of: "range") {
//
//    let observable = Observable<Int>.range(start: 1, count: 10)
//
//    observable.subscribe(onNext: { (i) in
//            let n = Double(i)
//            let fibonacci = Int(((pow(1.61803, n) - pow(0.61803, n)) / 2.23606).rounded())
//            print(fibonacci)
//        }).dispose()
//}

//example(of: "DisposeBag") {
//
//    let disposeBag = DisposeBag()
//
//    Observable.of("A", "B", "C")
//        .subscribe(onNext: {
//            print($0)
//        })
//        .disposed(by: disposeBag)
//
//    print(disposeBag)
//}
//
//public func example(of description: String,
//                    action: () -> Void) {
//    print("\n--- Example of:", description, "---")
//    action()
//}

//let observable = Observable<Int>.range(start: 1, count: 9)
//for i in 1...9 {
//    observable.subscribe (onNext: {
//        let gogo = i * $0
//        print(i, "*", $0, "=", i * $0)
//    }).dispose()
//}

//let arr = ["eunho", "tyler", "kevin", "we with"]
//
//let observable = Observable<String>.from(arr)
//    observable.subscribe (onNext: { event in
//        print(event)
//    }).dispose()



//example(of: "dispose") {
//
//    let observable = Observable.of("A", "B", "C")
//
//    observable.subscribe(onNext: { (event) in
//            print(event)
//    }).dispose()
//}

//example(of: "DisposeBag") {
//
//    let disposeBag = DisposeBag()
//
//    Observable.of("A", "B", "C")
//        .subscribe(onNext: {
//            print($0)
//        })
//        .disposed(by: disposeBag)
//
//    print(disposeBag)
//}
//
//
//public func example(of description: String,
//                    action: () -> Void) {
//    print("\n--- Example of:", description, "---")
//    action()
//}

//enum MyError: Error {
//    case anError
//}
//
//example(of: "create") {
//    let disposeBag = DisposeBag()
//
//    Observable<String>.create({ (observer) -> Disposable in
//        observer.onNext("1")
//        observer.onError(MyError.anError)
//        observer.onCompleted()
//        observer.onNext("?")
//
//        return Disposables.create()
//    })
//        .subscribe (
//            onNext: { print($0) },
//            onError: { print($0) },
//            onCompleted: { print("Completed") },
//            onDisposed: { print("Disposed") }
//    ).disposed(by: disposeBag)
//}

//example(of: "PublishSubject") {
//
//    // 1
//    let subject = PublishSubject<String>()
//
//    // 2
//    subject.onNext("Is anyone listening?")
//
//    // 3
//    let subscriptionOne = subject
//        .subscribe(onNext: {
//            print($0)
//        })
//
//    // 4
//    subject.on(.next("1"))        //Print: 1
//
//    // 5
//    subject.onNext("2")        //Print: 2
//}

//public func example(of description: String,
//                    action: () -> Void) {
//    print("\n--- Example of:", description, "---")
//    action()
//}

//
//example(of: "PublishSubject") {
//    let subject = PublishSubject<String>()
//    subject.onNext("Is anyone listening?")
//
//    let subscriptionOne = subject
//        .subscribe(onNext: { (string) in
//            print(string)
//        })
//    subject.on(.next("1"))
//    subject.onNext("2")
//
//    // 1
//    let subscriptionTwo = subject
//        .subscribe({ (event) in
//            print("2)", event.element ?? event)
//        })
//
//    // 2
//    subject.onNext("3")
//
//    // 3
//    subscriptionOne.dispose()
//    subject.onNext("4")
//
//    // 4
//    subject.onCompleted()
//
//    // 5
//    subject.onNext("5")
//
//    // 6
//    subscriptionTwo.dispose()
//
//    let disposeBag = DisposeBag()
//
//    // 7
//    subject
//        .subscribe {
//            print("3)", $0.element ?? $0)
//    }
//        .disposed(by: disposeBag)
//
//    subject.onNext("?")
//}

//example(of: "PublishSubject") {
//
//    // 1
//    let subject = PublishSubject<String>()
//
//    // 2
//    subject.onNext("Is anyone listening?")
//
//    // 3
//    let subscriptionOne = subject
//        .subscribe(onNext: { (string) in
//            print(string)
//        })
//
//    // 4
//    subject.on(.next("1"))        //Print: 1
//
//    // 5
//    subject.onNext("2")        //Print: 2
//}

enum TraitsError: Error {
    case single
    case maybe
    case completable
}

Observable<String>
    .create({ observer -> Disposable in
        observer.onError(TraitsError.single)
        return Disposables.create()
})
    .asSingle()
    .subscribe(
        onSuccess: {
        print($0)
    },
        onFailure: {
            print("error: \($0.localizedDescription)")
    },
        onDisposed: {
        print("disposed")
    })
