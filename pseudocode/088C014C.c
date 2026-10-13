/* Entry 0x088C014C | file offset 0x000BD124 | FUN_088c014c | bytes 116 */

void FUN_088c014c(short *param_1,int param_2)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  int iVar4;
  
  psVar3 = (short *)(param_2 + 0x30);
  psVar2 = (short *)(param_2 + 0x34);
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  iVar4 = 0;
  psVar1 = param_1;
  do {
    if ((-1 < *psVar3) && (-1 < *psVar2)) {
      *psVar1 = *psVar2;
      psVar1[1] = 1;
      psVar1[2] = psVar2[1];
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    }
    iVar4 = iVar4 + 1;
    psVar3 = psVar3 + 1;
    psVar2 = psVar2 + 2;
    psVar1 = psVar1 + 6;
  } while (iVar4 < 2);
  return;
}

