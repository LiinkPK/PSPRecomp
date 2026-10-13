/* Entry 0x0891C230 | file offset 0x00119208 | FUN_0891c230 | bytes 188 */

undefined1 FUN_0891c230(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_110 [256];
  undefined4 local_10;
  undefined1 local_c;
  
  iVar1 = *param_2;
  local_10 = param_3;
  if (iVar1 < 1) {
    if (-1 < iVar1) {
      local_c = 1;
      FUN_0893476c(auStack_110,"talkevent/%s.evex",param_2 + 1);
      FUN_088e9958(0);
      FUN_088e980c(auStack_110,0);
      FUN_088e991c(0,local_10);
      return local_c;
    }
  }
  else if (iVar1 < 2) {
    local_c = 1;
    FUN_088e98b4(param_2[1],(char)param_2[2],0);
    FUN_088e991c(0,local_10);
    return local_c;
  }
  return 0;
}

