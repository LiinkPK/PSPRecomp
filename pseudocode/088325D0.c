/* Entry 0x088325D0 | file offset 0x0002F5A8 | FUN_088325d0 | bytes 140 */

void FUN_088325d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined1 param_5)

{
  undefined1 auStack_30 [4];
  undefined4 local_2c;
  undefined4 local_24;
  
  FUN_089a3868(auStack_30);
  local_2c = param_1;
  local_24 = param_2;
  func_0x08a56f98(param_3,auStack_30,1,param_5);
  *(uint *)(param_4 + 0x28) = *(uint *)(param_4 + 0x28) | 1;
  return;
}

