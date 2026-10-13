/* Entry 0x0899F5A4 | file offset 0x0019C57C | FUN_0899f5a4 | bytes 616 */

int FUN_0899f5a4(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  
  if (DAT_09af67e8 == 0) {
    iVar4 = -0x7fffffff;
  }
  else {
    uVar3 = sceKernelCpuSuspendIntr();
    if ((int)(&DAT_09af692c)[param_1 * 0x3f] < 0) {
      DAT_09af6830 = &DAT_09af6834 + param_1 * 0x3f;
      (&DAT_09af692c)[param_1 * 0x3f] = DAT_09af67f4;
      DAT_09af67f4 = param_1;
      sceKernelCpuResumeIntr(uVar3);
      puVar2 = DAT_09af6830;
      if (param_1 - 3U < 2) {
        DAT_09af6830[3] = param_3;
        puVar2[2] = param_2 & 0x1fffffff;
        puVar2[1] = param_2 & 0x1fffffff;
      }
      else {
        uVar6 = param_2 & 0x1fffffff | 0x40000000;
        DAT_09af6830[3] = param_3;
        puVar2[2] = uVar6;
        puVar2[1] = uVar6;
        if (-1 < (int)(param_2 << 1)) {
          uVar3 = sceKernelCpuSuspendIntr();
          puVar2 = DAT_09af6830;
          cacheOp(0x1b,param_2);
          while( true ) {
            puVar5 = (undefined4 *)puVar2[2];
            if (((uint)puVar5 & 0x3f) == 0) break;
            puVar2[2] = puVar5 + 1;
            *puVar5 = 0;
          }
          sceKernelCpuResumeIntr(uVar3);
        }
      }
      iVar4 = DAT_09af6800;
      if (DAT_09af67f4 == 0) {
        DAT_09af67e0 = 0;
        iVar4 = sceGeListEnQueue(DAT_09af6830[1],DAT_09af6830[2],DAT_09af6808,&DAT_089d1860);
        if (iVar4 < 0) {
          return iVar4;
        }
      }
      DAT_09af6800 = iVar4;
      if (DAT_09af67ec == 0) {
        FUN_0899fe70(&DAT_089d1870);
        FUN_0899ff9c(0x10,0x10);
        FUN_0899ffc8(7);
        FUN_0899fff0(0x3f800000);
        FUN_089a001c(0x3f800000,0x3f800000);
        DAT_09af67ec = 1;
      }
      puVar2 = DAT_09af6830;
      uVar1 = DAT_09af6828;
      uVar3 = DAT_09af6824;
      if (DAT_09af67f4 != 0) {
        return 0;
      }
      if (DAT_09af6810 == 0) {
        return 0;
      }
      DAT_09af6830[0x27] = DAT_09af680c;
      puVar2[0x28] = uVar3;
      puVar2[0x29] = uVar1;
      puVar8 = (uint *)puVar2[2];
      uVar6 = DAT_09af6814 & 0xffffff;
      uVar7 = ((DAT_09af6814 & 0xfffffff) >> 0x18) << 0x10 | 0x9d000000 | DAT_09af6810;
      *puVar8 = DAT_09af680c | 0xd2000000;
      puVar2[2] = puVar8 + 3;
      puVar8[1] = uVar7;
      puVar8[2] = uVar6 | 0x9c000000;
      return 0;
    }
    sceKernelCpuResumeIntr(uVar3);
    iVar4 = -0x7fffffdf;
  }
  DAT_09af6830 = (undefined4 *)0x0;
  return iVar4;
}

