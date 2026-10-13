/* Entry 0x08990968 | file offset 0x0018D940 | FUN_08990968 | bytes 344 */

void FUN_08990968(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  
  sceKernelWaitSema(*(undefined4 *)(DAT_089da420 + 0x2c),1,0);
  iVar4 = DAT_089da420;
  iVar1 = DAT_089da420 + param_1 * 0x3c;
  if (param_3 == 0) {
    fVar3 = (float)*(int *)(iVar1 + 0x194) / 100.0;
    *(uint *)(iVar1 + 0x178) = *(uint *)(iVar1 + 0x178) & 0xffffffbf;
    *(int *)(iVar1 + 0x180) = param_2;
    *(int *)(iVar1 + 0x184) = param_2;
    *(undefined4 *)(iVar1 + 0x18c) = 0;
    iVar5 = (int)((float)param_2 * fVar3);
    iVar4 = (int)((float)param_2 * ((float)*(int *)(iVar1 + 0x198) / 100.0) * fVar3);
    FUN_089a50e0(param_1,iVar5,iVar5,iVar4,iVar4);
    uVar2 = *(undefined4 *)(DAT_089da420 + 0x2c);
  }
  else {
    *(int *)(iVar1 + 0x18c) = param_3;
    *(int *)(iVar1 + 0x188) = param_2;
    iVar5 = *(int *)(iVar1 + 0x180);
    if (*(int *)(iVar1 + 0x180) < *(int *)(iVar1 + 0x184)) {
      iVar5 = *(int *)(iVar1 + 0x184);
    }
    *(uint *)(iVar1 + 0x178) = *(uint *)(iVar1 + 0x178) | 0x40;
    *(int *)(iVar1 + 400) = (param_2 - (int)(float)iVar5) / param_3;
    uVar2 = *(undefined4 *)(iVar4 + 0x2c);
  }
  sceKernelSignalSema(uVar2,1);
  return;
}

