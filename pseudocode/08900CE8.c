/* Entry 0x08900CE8 | file offset 0x000FDCC0 | FUN_08900ce8 | bytes 128 */

void FUN_08900ce8(undefined4 param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = FUN_08900da0();
  if (iVar1 != 0) {
    FUN_08902994(DAT_089d712c + 0x3b7a4,(int)*(char *)(iVar1 + 2),(int)*param_2,
                 param_2 + param_2[0x773] * 0xc6 + 0x10);
  }
  return;
}

