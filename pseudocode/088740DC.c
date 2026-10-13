/* Entry 0x088740DC | file offset 0x000710B4 | FUN_088740dc | bytes 60 */

void FUN_088740dc(int param_1)

{
  code *pcVar1;
  
  *(undefined4 *)(param_1 + 0x234) = 0;
  param_1 = param_1 + *(int *)(param_1 + 0x220) * 0x20;
  pcVar1 = *(code **)(param_1 + 0x14);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined4 *)(param_1 + 0x18));
  }
  return;
}

