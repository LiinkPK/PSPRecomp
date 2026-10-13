/* Entry 0x088DEC14 | file offset 0x000DBBEC | FUN_088dec14 | bytes 100 */

undefined4 FUN_088dec14(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_088dec0c();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 4) == 0) {
      iVar1 = FUN_088daa40(*(undefined4 *)(param_1 + 8),0,0);
      *(int *)(param_1 + 4) = iVar1;
      if (iVar1 == 0) {
        return 0xfffffffe;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

