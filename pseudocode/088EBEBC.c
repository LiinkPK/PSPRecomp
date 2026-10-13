/* Entry 0x088EBEBC | file offset 0x000E8E94 | FUN_088ebebc | bytes 252 */

void FUN_088ebebc(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)(param_1 + 0x50);
  while (cVar1 == '\0') {
    FUN_088ec010(param_1);
    cVar1 = *(char *)(param_1 + 0x50);
  }
  iVar2 = **(int **)(param_1 + 0x28);
  (**(code **)(iVar2 + 0x2c))
            ((int)*(int **)(param_1 + 0x28) + (int)*(short *)(iVar2 + 0x28),param_1);
  cVar1 = *(char *)(param_1 + 0x51);
  while (cVar1 == '\0') {
    FUN_088ec010(param_1);
    cVar1 = *(char *)(param_1 + 0x51);
  }
  FUN_0885cba4();
  iVar2 = **(int **)(param_1 + 0x28);
  (**(code **)(iVar2 + 0x1c))
            ((int)*(int **)(param_1 + 0x28) + (int)*(short *)(iVar2 + 0x18),param_1);
  if (*(char *)(param_1 + 0x53) == '\x01') {
    iVar2 = **(int **)(param_1 + 0x28);
    (**(code **)(iVar2 + 0xc))((int)*(int **)(param_1 + 0x28) + (int)*(short *)(iVar2 + 8),2);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  FUN_08865918(DAT_089d5ec0);
  FUN_0886598c(DAT_089d5ec0);
  *(undefined1 *)(param_1 + 0x52) = 0;
  *(undefined1 *)(param_1 + 0x53) = 0;
  return;
}

