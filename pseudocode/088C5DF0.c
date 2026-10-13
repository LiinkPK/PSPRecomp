/* Entry 0x088C5DF0 | file offset 0x000C2DC8 | FUN_088c5df0 | bytes 84 */

undefined4 FUN_088c5df0(int param_1)

{
  undefined4 uVar1;
  undefined2 local_1e [9];
  
  uVar1 = 0;
  if (-1 < param_1) {
    local_1e[0] = (undefined2)param_1;
    uVar1 = FUN_088c5ce8(DAT_089d771c,DAT_089d771c + *(int *)(DAT_089d7718 + 8) * 0x12,local_1e,0);
  }
  return uVar1;
}

