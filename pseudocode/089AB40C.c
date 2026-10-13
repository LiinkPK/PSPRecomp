/* Entry 0x089AB40C | file offset 0x001A83E4 | FUN_089ab40c | bytes 88 */

void FUN_089ab40c(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  iVar2 = param_1 * 0x18;
  if ((&DAT_089daef3)[iVar2] == '\0') {
    puVar3 = (&PTR_FUN_089daee8)[param_2 * 6];
    puVar4 = (&PTR_FUN_089daeec)[param_2 * 6];
    uVar1 = *(undefined2 *)(&DAT_089daef0 + param_2 * 0x18);
    (&DAT_089daef2)[iVar2] = (&DAT_089daef2)[param_2 * 0x18];
    (&PTR_FUN_089daee8)[param_1 * 6] = puVar3;
    (&PTR_FUN_089daeec)[param_1 * 6] = puVar4;
    *(undefined2 *)(&DAT_089daef0 + iVar2) = uVar1;
  }
  return;
}

