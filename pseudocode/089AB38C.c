/* Entry 0x089AB38C | file offset 0x001A8364 | FUN_089ab38c | bytes 128 */

void FUN_089ab38c(int param_1,undefined *param_2,undefined *param_3,undefined2 param_4,
                 undefined1 param_5)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = param_1 * 0x18;
  bVar2 = param_2 != (undefined *)0x0 && param_3 != (undefined *)0x0;
  if (param_2 == (undefined *)0x0) {
    (&PTR_FUN_089daee8)[param_1 * 6] = FUN_089abf78;
  }
  else {
    (&PTR_FUN_089daee8)[param_1 * 6] = param_2;
  }
  if (param_3 != (undefined *)0x0) {
    (&DAT_089daef3)[iVar1] = bVar2;
    (&PTR_FUN_089daeec)[param_1 * 6] = param_3;
    *(undefined2 *)(&DAT_089daef0 + iVar1) = param_4;
    (&DAT_089daef2)[iVar1] = param_5;
    return;
  }
  (&DAT_089daef3)[iVar1] = bVar2;
  (&PTR_FUN_089daeec)[param_1 * 6] = FUN_089abf80;
  *(undefined2 *)(&DAT_089daef0 + iVar1) = param_4;
  (&DAT_089daef2)[iVar1] = param_5;
  return;
}

