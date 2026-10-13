/* Entry 0x088BFEEC | file offset 0x000BCEC4 | FUN_088bfeec | bytes 84 */

undefined4 FUN_088bfeec(int param_1)

{
  undefined4 uVar1;
  undefined2 local_e [5];
  
  uVar1 = 0;
  if (param_1 != -1) {
    local_e[0] = (undefined2)param_1;
    uVar1 = FUN_088bfbec(DAT_089d73e8,DAT_089d73e8 + *(int *)(DAT_089d73e0 + 8) * 8,local_e,0);
  }
  return uVar1;
}

