/* Entry 0x08911D68 | file offset 0x0010ED40 | FUN_08911d68 | bytes 184 */

void FUN_08911d68(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_088bbd8c(param_6);
  if (iVar2 != 0) {
    iVar3 = (uint)*(byte *)(iVar2 + 2) * 4;
    if (*(char *)(iVar2 + 3) == '\0') {
      uVar1 = *(undefined2 *)(&DAT_089cf352 + iVar3);
    }
    else {
      uVar1 = *(undefined2 *)(&DAT_089cf350 + iVar3);
    }
    FUN_08911cc8(param_1,param_2,param_3,param_4,param_5,1,uVar1,*(undefined1 *)(iVar2 + 5));
  }
  return;
}

