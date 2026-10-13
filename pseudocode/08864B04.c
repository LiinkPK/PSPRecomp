/* Entry 0x08864B04 | file offset 0x00061ADC | FUN_08864b04 | bytes 88 */

void FUN_08864b04(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  do {
    FUN_08864b68(param_1,8);
    iVar1 = sceIoClose(param_2);
  } while (iVar1 != 0);
  return;
}

