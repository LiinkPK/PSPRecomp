/* Entry 0x088A1024 | file offset 0x0009DFFC | FUN_088a1024 | bytes 228 */

undefined4 FUN_088a1024(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_08862c40(*(undefined4 *)(param_1 + 4),1);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_088a0cb0(iVar1,*(undefined4 *)(param_1 + 4));
    uVar3 = FUN_088a0cf8(iVar2);
    FUN_088fe708(*(undefined4 *)(param_1 + 4),uVar3,iVar1,0);
    iVar1 = FUN_088a15b8(DAT_089d6c88,uVar3,iVar1);
    if (iVar1 == -1) {
      FUN_088a0d1c(iVar2);
      uVar3 = 0;
    }
    else {
      *param_2 = iVar1;
      param_2[1] = iVar2;
      *(undefined1 *)(param_2 + 2) = 0;
      FUN_08935af8(param_2 + 2,*(undefined4 *)(param_1 + 4),0x1f);
      param_2[10] = 1;
      *(undefined1 *)(param_2 + 0xb) = 0;
      uVar3 = 1;
    }
  }
  return uVar3;
}

