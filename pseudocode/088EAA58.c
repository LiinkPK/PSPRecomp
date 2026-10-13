/* Entry 0x088EAA58 | file offset 0x000E7A30 | FUN_088eaa58 | bytes 152 */

void FUN_088eaa58(undefined4 *param_1,char param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  
  param_1[8] = 0;
  uVar2 = 0;
  puVar1 = param_1;
  do {
    if (param_2 == '\0') {
      *puVar1 = 0;
    }
    puVar1[1] = 0;
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 2;
  } while (uVar2 < 2);
  param_1[4] = 0;
  if (param_2 == '\0') {
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[10] = 0xffffffff;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
  }
  param_1[7] = 0;
  uVar2 = 0;
  puVar1 = param_1;
  do {
    if (param_2 == '\0') {
      puVar1[0xb] = 0;
    }
    *(undefined1 *)(puVar1 + 0xc) = 1;
    *(undefined1 *)((int)puVar1 + 0x31) = 0;
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 2;
  } while (uVar2 < 8);
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  return;
}

