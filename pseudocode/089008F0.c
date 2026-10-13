/* Entry 0x089008F0 | file offset 0x000FD8C8 | FUN_089008f0 | bytes 228 */

void FUN_089008f0(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if ((*param_1 != -1) && (param_1[1] != -1)) {
    iVar2 = FUN_088b37c0();
    iVar3 = FUN_088b36fc(param_1[1]);
    if (((*(ushort *)(iVar2 + 0xe) & 0x200) != 0) || (param_1[3] != -1)) {
      param_1[4] = 0;
      cVar1 = *(char *)(*(int *)(iVar3 + 0xc) + 8);
      param_1[6] = 0;
      param_1[5] = (int)cVar1;
      param_1[8] = 0;
      param_1[0xb] = 0;
      param_1[10] = 0;
      param_1[0xd] = 0;
      param_1[0xc] = 0;
      param_1[0xf] = 0;
      param_1[0xe] = 0;
      FUN_0891a848(param_1 + 0x1a);
      FUN_08901ea4(param_1,1);
    }
  }
  return;
}

