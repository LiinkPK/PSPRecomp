/* Entry 0x0889F980 | file offset 0x0009C958 | FUN_0889f980 | bytes 68 */

undefined4 FUN_0889f980(int *param_1)

{
  undefined4 uVar1;
  
  if (*param_1 == -1) {
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_088a159c(DAT_089d6c88,*param_1);
  }
  return uVar1;
}

