/* Entry 0x08909B04 | file offset 0x00106ADC | FUN_08909b04 | bytes 92 */

bool FUN_08909b04(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_08903e20(param_1 + 4,0,0,0);
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x14c58) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 400) = 2;
  }
  return iVar1 != 0;
}

