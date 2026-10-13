/* Entry 0x089BA564 | file offset 0x001B753C | FUN_089ba564 | bytes 88 */

void FUN_089ba564(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  iVar2 = param_1 * 0x18;
  if ((&DAT_089daf3b)[iVar2] == '\0') {
    puVar3 = (&PTR_FUN_089daf30)[param_2 * 6];
    puVar4 = (&PTR_FUN_089daf34)[param_2 * 6];
    uVar1 = *(undefined2 *)(&DAT_089daf38 + param_2 * 0x18);
    (&DAT_089daf3a)[iVar2] = (&DAT_089daf3a)[param_2 * 0x18];
    (&PTR_FUN_089daf30)[param_1 * 6] = puVar3;
    (&PTR_FUN_089daf34)[param_1 * 6] = puVar4;
    *(undefined2 *)(&DAT_089daf38 + iVar2) = uVar1;
  }
  return;
}

