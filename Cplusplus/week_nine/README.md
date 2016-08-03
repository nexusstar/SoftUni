# The Concurency API

If we want to run a function asynchronously, there are two
approaches. We create `std::thread` and run function on it

    void doAsyncWork()
    std::thread t(doAsyncWork);

OR we can pass `doAsyncWork` to `std::async` - task based strategy

* The `std::thread` API offers no direct way to get return values from
asynchronous call
