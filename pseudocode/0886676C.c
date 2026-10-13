/* Entry 0x0886676C | file offset 0x00063744 | FUN_0886676c | bytes 112 */

void FUN_0886676c(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_0886615c(param_1);
  iVar2 = 0;
  puVar1 = param_1;
  do {
    FUN_0888218c(*puVar1,0x80);
    *puVar1 = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 2);
  FUN_08866a3c(param_1);
  FUN_08866968(param_1);
  return;
}

