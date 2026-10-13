/* Entry 0x088211B8 | file offset 0x0001E190 | FUN_088211b8 | bytes 192 */

undefined4 FUN_088211b8(undefined1 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_0882117c();
  if ((param_2 == 0) || (param_3 == 0)) {
    uVar2 = 0xffffffff;
  }
  else {
    param_1[1] = *(undefined1 *)(param_3 + 0x19);
    if ((char)param_1[1] != 0) {
      iVar1 = FUN_08842100((char)param_1[1] * 3);
      *(int *)(param_1 + 0xc) = iVar1;
      if (iVar1 == 0) {
        return 0xfffffffe;
      }
    }
    *(int *)(param_1 + 4) = param_2;
    *(int *)(param_1 + 8) = param_3;
    *param_1 = 1;
    iVar1 = FUN_0882130c(param_1);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      FUN_0882117c(param_1);
      uVar2 = 0xfffffffd;
    }
  }
  return uVar2;
}

