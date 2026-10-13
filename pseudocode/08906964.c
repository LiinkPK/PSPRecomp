/* Entry 0x08906964 | file offset 0x0010393C | FUN_08906964 | bytes 308 */

void FUN_08906964(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  int local_540 [288];
  undefined4 local_c0;
  undefined1 auStack_bc [8];
  undefined1 auStack_b4 [128];
  int local_34;
  
  piVar4 = local_540;
  local_c0 = 0x480;
  iVar1 = sceNetAdhocGetPtpStat(&local_c0,local_540);
  if ((iVar1 == 0) && (&stack0x00000000 != (undefined1 *)0x540)) {
    do {
      if (param_2 == 0) {
LAB_089069fc:
        uVar3 = 0;
        do {
          while( true ) {
            local_34 = 0x80;
            iVar1 = sceNetAdhocPtpRecv(piVar4[1],auStack_b4,&local_34,0,1);
            if (iVar1 != 0) break;
            uVar3 = local_34 + uVar3;
            if ((uint)piVar4[7] <= uVar3) goto LAB_08906a60;
          }
        } while (iVar1 != -0x7fbef8f7);
      }
      else {
        uVar2 = FUN_08905810(auStack_bc,(int)piVar4 + 0xe);
        iVar1 = FUN_08935490(param_2,uVar2,6);
        if (iVar1 == 0) goto LAB_089069fc;
      }
LAB_08906a60:
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)0x0);
  }
  return;
}

