/* Entry 0x088A49EC | file offset 0x000A19C4 | FUN_088a49ec | bytes 68 */

void FUN_088a49ec(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x20) != 2) {
    FUN_088a483c(param_1,1);
    uVar1 = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x20) = 2;
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return;
}

