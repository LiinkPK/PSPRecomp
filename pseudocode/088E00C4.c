/* Entry 0x088E00C4 | file offset 0x000DD09C | FUN_088e00c4 | bytes 256 */

void FUN_088e00c4(int param_1)

{
  FUN_088e2dd4(param_1 + 0x5bc);
  FUN_088e5b58(param_1 + 0xd7c);
  if (*(char *)(param_1 + 0x17b9) == '\0') {
    FUN_088e0814(param_1);
  }
  if (*(char *)(param_1 + 0x17b9) == '\0') {
    FUN_088ea868(param_1 + 0x128c);
  }
  if (*(char *)(param_1 + 0x17ba) != '\0') {
    FUN_088e6764(param_1 + 0x12b0);
  }
  if (*(char *)(param_1 + 0x17b9) == '\0') {
    FUN_088eac08(param_1 + 0x12d8);
  }
  FUN_088ea368(param_1 + 0x135c);
  if (*(char *)(param_1 + 0x17b9) == '\0') {
    FUN_08860eb0();
  }
  FUN_08873594(0x3f800000,0x447a0000,DAT_089d5ec0 + 0x7e0);
  FUN_088759c0(DAT_089d6040);
  FUN_08861098(DAT_089d5e88);
  if ((*(ushort *)(*(int *)(param_1 + 8) + 6) & 4) != 0) {
    *(undefined4 *)(param_1 + 0x1630) = 0;
    FUN_088664fc(*(undefined4 *)(param_1 + 0x162c));
    *(undefined4 *)(param_1 + 0x162c) = 0;
  }
  return;
}

