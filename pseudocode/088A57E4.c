/* Entry 0x088A57E4 | file offset 0x000A27BC | FUN_088a57e4 | bytes 76 */

void FUN_088a57e4(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x124c) == -1) {
    uVar1 = FUN_088a5208(*(undefined4 *)(param_1 + 0x1248));
    uVar1 = FUN_089411d8(*(undefined4 *)(DAT_089d6d80 + 8),uVar1);
    *(undefined4 *)(param_1 + 0x124c) = uVar1;
  }
  return;
}

