/* Entry 0x088FA8F4 | file offset 0x000F78CC | FUN_088fa8f4 | bytes 152 */

void FUN_088fa8f4(int param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  FUN_088fa5f4(param_1,param_2,param_3);
  iVar1 = 0;
  iVar4 = 0x23;
  do {
    puVar2 = (undefined4 *)(param_2 + 0x2d4 + iVar1);
    uVar3 = puVar2[1];
    *(undefined4 *)(&DAT_09afc7e0 + iVar1 + param_1 * 0x1060) = *puVar2;
    *(undefined4 *)((int)(&DAT_09afc7e0 + iVar1 + param_1 * 0x1060) + 4) = uVar3;
    iVar4 = iVar4 + -1;
    iVar1 = iVar1 + 8;
  } while (iVar4 != 0);
  return;
}

