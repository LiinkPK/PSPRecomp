/* Entry 0x088D7EAC | file offset 0x000D4E84 | FUN_088d7eac | bytes 196 */

undefined4 FUN_088d7eac(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_088d7ea4();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else if (param_2 < 2) {
    iVar3 = *(int *)(&DAT_089cc180 + param_2 * 4);
    iVar1 = *(int *)(param_1 + 4);
    if (iVar1 == 0) {
      iVar1 = FUN_088daa40(*(undefined4 *)(param_1 + 0x10),iVar3,0);
      *(int *)(param_1 + 4) = iVar1;
      if (iVar1 == 0) {
        return 0xfffffffd;
      }
    }
    else if (*(short *)(iVar1 + 0xc) != iVar3) {
      FUN_088d9f5c(iVar1,iVar3,1);
    }
    *(uint *)(param_1 + 8) = param_2;
    *(undefined4 *)(param_1 + 0xc) = param_3;
    uVar2 = 0;
  }
  else {
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}

