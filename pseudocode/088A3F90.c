/* Entry 0x088A3F90 | file offset 0x000A0F68 | FUN_088a3f90 | bytes 156 */

undefined4 FUN_088a3f90(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  
  if (param_3 != 0) {
    puVar1 = &DAT_09b4d2b0;
    uVar2 = 0;
    do {
      if (param_3 == puVar1[3]) {
        return 1;
      }
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 4;
    } while (uVar2 < 0x10);
    uVar2 = 0;
    puVar1 = &DAT_09b4d2b0;
    do {
      if (puVar1[1] == 0) {
        *puVar1 = 0;
        puVar1[1] = param_1;
        puVar1[2] = param_2;
        puVar1[3] = param_3;
        return 1;
      }
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 4;
    } while (uVar2 < 0x10);
  }
  return 0;
}

