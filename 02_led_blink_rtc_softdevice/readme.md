# Encountred issues

* Out of Memory : cannot move location counter backwards (from 20003ea0 to 20003800)
* Tried optimisations :  
- -DNDEBUG, 
- develop_nano.json with "--specs=nano.specs", 
- reduced trhead stack to 512 in stead of 4096
* S110 not available in folder, only S130
* removed "BLE feature"
* without debug cannot really solve problems, with debug, even with 512 thread stack, runs out of memory
