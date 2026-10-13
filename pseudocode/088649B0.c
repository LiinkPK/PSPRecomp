/* Entry 0x088649B0 | file offset 0x00061988 | FUN_088649b0 | bytes 140 */

void FUN_088649b0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  do {
    FUN_08864b68(param_1,6);
    iVar1 = sceIoLseek(param_2);
  } while (iVar1 < 0);
  return;
}

