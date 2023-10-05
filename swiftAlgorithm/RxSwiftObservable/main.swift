//---------------------------------------------------------------Observable .just, .of, .from-------------------------------------------------------------------------------------
// ✨ observable.just() 코드 ✨
//import RxSwift
//import Foundation
//
//let hello = "Hello World!!!"
//let one = 1
//let two = 2
//let three = 3
//
//let observable = Observable<String>.just(hello)
//let observable1 = Observable<Array>.just([one, two, three])
//
//let disposeBag = DisposeBag()
//
//observable
//    .subscribe(onNext: {
//        print($0)
//    }).disposed(by: disposeBag)
//
//observable1
//    .subscribe(onNext: {
//        print($0)
//    }).disposed(by: disposeBag)



// ✨ observable.of() 코드 ✨
//import RxSwift
//import Foundation
//
//let one = 1
//let two = 2
//let three = 3
//
//let disposeBag = DisposeBag()
//
//let observable = Observable<Int>.of(one, two, three)
//
//observable
//    .subscribe {
//        if let event = $0.element {
//            print("first subscribe : \(event)")
//        }
//    }.disposed(by: disposeBag)
//
//observable.subscribe(onNext: {
//    print("second subscribe : \($0)")
//}).disposed(by: disposeBag)
//
//observable.subscribe {
//    print("third subscribe : \($0)")
//}.disposed(by: disposeBag)


// ✨ observable.from() 코드 ✨
//import RxSwift
//import Foundation
//
//let num = [1, 2, 3]
//
//let one = 1
//let two = 2
//let three = 3
//
//let observable = Observable<Int>.from([one, two, three])
//let observable1 = Observable<Int>.from(num)
//
//let disposeBag = DisposeBag()
//
//observable
//    .subscribe(onNext: {
//        print($0)
//    }).disposed(by: disposeBag)
//
//observable1
//    .subscribe(onNext: {
//        print($0)
//    }).disposed(by: disposeBag)

//--------------------------------------------------Observable .empty(), .never(), .range(), dispose, disposeBag,-----------------------------------------------------------------
// ✨ observable.empty() 코드 ✨
//import RxSwift
//import Foundation
//
//let observable = Observable<Void>.empty()
//
//let disposeBag = DisposeBag()
//
//observable
//    .subscribe(onNext: {
//        print($0)
//        
//    }, onCompleted: {
//        print("Completed")
//    }).disposed(by: disposeBag)

// ✨ observable.never() 코드 ✨
//import RxSwift
//import Foundation
//
//let observable = Observable<Void>.never()
//
//let disposeBag = DisposeBag()
//
//observable
//    .subscribe(onNext: {
//        print($0)
//        
//    }, onCompleted: {
//        print("Completed")
//    }).disposed(by: disposeBag)

// ✨ observable.range() 코드 ✨
//import RxSwift
//import Foundation
//
//let observable = Observable<Int>.range(start: 1, count: 9)
//
//let disposeBag = DisposeBag()
//
//for i in 1...9 {
//    observable
//        .subscribe(onNext: {
//            print("\(i) X \($0) = \(i * $0)")
//        }, onCompleted: {
//            print("------------\(i)단 끝------------")
//        }).disposed(by: disposeBag)
//}

// ✨ observable .dispose() 코드 ✨
//import RxSwift
//import Foundation
//
//Observable.of(1, 2, 3)
//        .subscribe {
//                print($0)
//}
//.dispose()

// ✨ observable .DisposeBag() 코드 ✨
//import RxSwift
//import Foundation
//
//var disposeBag = DisposeBag()
//
//Observable.of(1, 2, 3)
//    .subscribe (onNext:  {
//            print($0)
//}).disposed(by: disposeBag)

//---------------------------------------------------------------Observable .create()---------------------------------------------------------------------------------------------
// ✨ observable .create() 코드 ✨

