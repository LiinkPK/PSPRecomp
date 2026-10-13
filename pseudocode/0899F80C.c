/* Entry 0x0899F80C | file offset 0x0019C7E4 | FUN_0899f80c | bytes 420 */

int FUN_0899f80c(uint param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  
  puVar1 = DAT_09af6830;
  iVar4 = -0x7fffffdf;
  if (DAT_09af6830[4] == 0) {
    iVar4 = -0x7ffffef9;
    switch(DAT_09af67f4) {
    case 0:
      puVar6 = (uint *)DAT_09af6830[2];
      *puVar6 = param_1 & 0xffff | 0xf000000;
      puVar1[2] = puVar6 + 2;
      puVar6[1] = 0xc000000;
      iVar4 = FUN_089a22b8();
      if (iVar4 < 0) {
        return iVar4;
      }
      break;
    case 1:
    case 3:
      if (DAT_09af67f8 == 1) {
        puVar3 = (undefined4 *)DAT_09af6830[2];
        *puVar3 = 0xe120000;
        puVar1[2] = puVar3 + 2;
        puVar3[1] = 0xc000000;
      }
      else {
        puVar3 = (undefined4 *)DAT_09af6830[2];
        *puVar3 = 0xb000000;
        puVar1[2] = puVar3 + 1;
      }
      break;
    case 2:
    case 4:
      puVar6 = (uint *)DAT_09af6830[2];
      *puVar6 = param_1 & 0xffff | 0xf000000;
      puVar1[2] = puVar6 + 2;
      puVar6[1] = 0xc000000;
      break;
    default:
      goto switchD_0899f864_default;
    }
    iVar4 = DAT_09af6830[2] - DAT_09af6830[1];
    uVar2 = sceKernelCpuSuspendIntr();
    iVar5 = (&DAT_09af692c)[DAT_09af67f4 * 0x3f];
    (&DAT_09af692c)[DAT_09af67f4 * 0x3f] = 0xffffffff;
    if (iVar5 < 0) {
      DAT_09af6830 = (undefined4 *)0x0;
    }
    else {
      DAT_09af6830 = &DAT_09af6834 + iVar5 * 0x3f;
    }
    DAT_09af67f4 = iVar5;
    sceKernelCpuResumeIntr(uVar2);
  }
switchD_0899f864_default:
  return iVar4;
}

