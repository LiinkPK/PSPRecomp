/* Entry 0x089BA4E4 | file offset 0x001B74BC | FUN_089ba4e4 | bytes 128 */

void FUN_089ba4e4(int param_1,undefined *param_2,undefined *param_3,undefined2 param_4,
                 undefined1 param_5)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = param_1 * 0x18;
  bVar2 = param_2 != (undefined *)0x0 && param_3 != (undefined *)0x0;
  if (param_2 == (undefined *)0x0) {
    (&PTR_FUN_089daf30)[param_1 * 6] = FUN_089bb0d0;
  }
  else {
    (&PTR_FUN_089daf30)[param_1 * 6] = param_2;
  }
  if (param_3 != (undefined *)0x0) {
    (&DAT_089daf3b)[iVar1] = bVar2;
    (&PTR_FUN_089daf34)[param_1 * 6] = param_3;
    *(undefined2 *)(&DAT_089daf38 + iVar1) = param_4;
    (&DAT_089daf3a)[iVar1] = param_5;
    return;
  }
  (&DAT_089daf3b)[iVar1] = bVar2;
  (&PTR_FUN_089daf34)[param_1 * 6] = FUN_089bb0d8;
  *(undefined2 *)(&DAT_089daf38 + iVar1) = param_4;
  (&DAT_089daf3a)[iVar1] = param_5;
  return;
}

