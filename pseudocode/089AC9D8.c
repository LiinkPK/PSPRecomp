/* Entry 0x089AC9D8 | file offset 0x001A99B0 | FUN_089ac9d8 | bytes 208 */

int FUN_089ac9d8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1 != 0) {
    FUN_089acaa8(*(undefined4 *)(param_1 + 4),1);
    iVar3 = 0;
    if (*(short *)(param_1 + 0x18) == 0) {
      uVar2 = *(undefined4 *)(param_1 + 8);
    }
    else {
      iVar1 = *(int *)(param_1 + 8);
      while( true ) {
        iVar1 = *(int *)(iVar3 * 4 + iVar1);
        iVar3 = iVar3 + 1;
        if ((iVar1 + 1U & 0xffff0000) == 0) {
          iVar1 = 0;
        }
        FUN_089ac948(iVar1,1);
        if ((int)(uint)*(ushort *)(param_1 + 0x18) <= iVar3) break;
        iVar1 = *(int *)(param_1 + 8);
      }
      uVar2 = *(undefined4 *)(param_1 + 8);
    }
    thunk_FUN_089abeac(0,uVar2);
    thunk_FUN_089abeac(0,*(undefined4 *)(param_1 + 0xc));
    thunk_FUN_089abeac(0,*(undefined4 *)(param_1 + 0x10));
    thunk_FUN_089abeac(0,*(undefined4 *)(param_1 + 0x14));
    thunk_FUN_089abeac(0,*(undefined4 *)(param_1 + 0x30));
    thunk_FUN_089abeac(0,*(undefined4 *)(param_1 + 0x34));
  }
  return param_1;
}

