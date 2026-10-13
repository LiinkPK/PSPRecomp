/* Entry 0x088CAF10 | file offset 0x000C7EE8 | FUN_088caf10 | bytes 84 */

undefined4 FUN_088caf10(int param_1)

{
  undefined4 uVar1;
  undefined2 local_e [5];
  
  uVar1 = 0;
  if (param_1 != -1) {
    local_e[0] = (undefined2)param_1;
    uVar1 = FUN_088cad10(DAT_089d77d4,DAT_089d77d4 + *(short *)(DAT_089d77d0 + 8) * 8,local_e,0);
  }
  return uVar1;
}

