/* Entry 0x08916DAC | file offset 0x00113D84 | FUN_08916dac | bytes 80 */

void FUN_08916dac(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_089d83d8;
  FUN_08916bb4(DAT_089d83d8,param_1);
  FUN_088650a4(iVar1 + 4);
  if (-1 < param_2) {
    *(int *)(iVar1 + 0x38) = param_2;
  }
  return;
}

