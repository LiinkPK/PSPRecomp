/* Entry 0x088356C8 | file offset 0x000326A0 | FUN_088356c8 | bytes 176 */

void FUN_088356c8(int param_1,char param_2,char param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  
  cVar1 = *(char *)(*(int *)(param_1 + 0x30c) + 1);
  cVar2 = **(char **)(param_1 + 0x52c);
  *(char *)(*(int *)(param_1 + 0x30c) + 1) = cVar2;
  *(undefined2 *)(*(int *)(param_1 + 0x30c) + 4) = *(undefined2 *)(*(int *)(param_1 + 0x52c) + 0x10)
  ;
  if (param_2 == '\0') {
    *(undefined4 *)(*(int *)(param_1 + 0x30c) + 0xc) = 0;
    iVar3 = *(int *)(param_1 + 0x30c);
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0x30c) + 0xc) =
         *(undefined4 *)(*(int *)(param_1 + 0x52c) + 8);
    iVar3 = *(int *)(param_1 + 0x30c);
  }
  if (param_3 == '\0') {
    *(undefined2 *)(iVar3 + 6) = 0;
  }
  else {
    *(short *)(iVar3 + 6) = (short)(int)*(float *)(*(int *)(param_1 + 0x52c) + 0x18);
  }
  if (cVar2 != cVar1) {
    FUN_088cbd24(*(undefined4 *)(param_1 + 0x30c),cVar1,cVar2);
  }
  return;
}

