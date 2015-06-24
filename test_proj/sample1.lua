--result = cpp_func(1, 2)

--print(ONE)
--print(type(ONE))
--local lua_str = "zfz"
--cpp_test_str(lua_str)
--print(task_id)
--local zfz = 20 + task_id
--print(zfz)

print(task_id == rand_id)
--print(task_id == task_id2)
--print("task_id2: " .. task_id2.tostring())  
print("task_id3: " .. task_id3)   
--print(task_id2 >= task_id3)
--print("cpp_func(1,2) = "..result)

print(task_id)


function lua_func(arg1, arg2)
    return arg1 + arg2 
end


print("cpp int64 function(100000000333,20000000)=".. cpp_int64func(100000000333,20000000 ));


