/* Entry 0x0889F704 | file offset 0x0009C6DC | FUN_0889f704 | bytes 76 */

undefined4 FUN_0889f704(int *param_1)

{
  undefined4 uVar1;
  
  if (*param_1 == -1) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_088a13e4(DAT_089d6c88,*param_1);
    *param_1 = -1;
  }
  return uVar1;
}

