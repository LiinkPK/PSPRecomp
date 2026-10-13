/* Entry 0x089937D4 | file offset 0x001907AC | FUN_089937d4 | bytes 204 */

undefined8 FUN_089937d4(undefined4 param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  
  local_10 = param_1;
  local_c = param_2;
  if ((param_2 & 0x7fffffff) < 0x3fe921fc) {
    uVar2 = FUN_08997880(param_1,param_2,0,0,1);
    return uVar2;
  }
  if (0x7fefffff < (param_2 & 0x7fffffff)) {
    return 0;
  }
  uVar1 = FUN_08995d30(param_1,param_2,&local_20);
  uVar2 = FUN_08997880(local_20,local_1c,local_18,local_14,(uVar1 & 1) * -2 + 1);
  return uVar2;
}

