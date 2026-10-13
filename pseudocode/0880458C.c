/* Entry 0x0880458C | file offset 0x00001564 | FUN_0880458c | bytes 112 */

void FUN_0880458c(int param_1,int param_2)

{
  undefined1 auStack_20 [4];
  undefined4 local_1c;
  
  FUN_089a3868(auStack_20,param_2 + 0xb0);
  local_1c = FUN_08834840(param_2);
  *(uint *)(param_2 + 900) = *(uint *)(param_2 + 900) | 2;
  (**(code **)(*(int *)(param_1 + 8) + 0x2c))
            (param_1 + *(short *)(*(int *)(param_1 + 8) + 0x28),param_2,auStack_20);
  return;
}

