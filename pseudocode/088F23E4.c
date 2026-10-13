/* Entry 0x088F23E4 | file offset 0x000EF3BC | FUN_088f23e4 | bytes 96 */

void FUN_088f23e4(undefined4 *param_1,undefined4 param_2)

{
  undefined1 auStack_190 [4];
  undefined4 local_18c;
  undefined4 local_188;
  
  FUN_088c1c0c(auStack_190);
  FUN_088c1cd4(auStack_190,&local_18c,param_2,1);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = local_18c;
    param_1[1] = local_188;
  }
  return;
}

